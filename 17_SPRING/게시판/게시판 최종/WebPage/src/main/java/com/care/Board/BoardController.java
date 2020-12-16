package com.care.Board;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

import javax.servlet.http.HttpServletRequest;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.SessionAttributes;
import org.springframework.web.bind.support.SessionStatus;
import org.springframework.web.servlet.HandlerMapping;


@SessionAttributes("sessionInfo")
@RequestMapping("board")
@Controller
public class BoardController {
	private static final Logger logger = LoggerFactory.getLogger(BoardController.class);
	
	@Autowired
	private IService iServ;
	@RequestMapping("detailRead")
	public String detailRead(@RequestParam("writeNo") String no,
			Model model){
		model.addAttribute("boardInfo", iServ.detailRead(no));
		return "forward:/view";
	}
	@RequestMapping("deleteBoard")
	public String deleteBoard(@RequestParam("deleteNo") String deleteNo,
			Model model){
		/*
		 * String [] chkBoxArr = deleteNo.split(" ");
		 * 
		 * for(String chk : chkBoxArr) logger.warn(chk);
		 */
		iServ.deleteBoard(deleteNo);
		return "forward:/board/selectBoard";
	}
	
	@RequestMapping("selectBoard")
	public String selectBoard(Model model, 
			@RequestParam(value = "curPage", defaultValue = "1") String curPage,
			@RequestParam(value = "searchSelect", defaultValue = "") String selectOpt,
			@RequestParam(value = "search", defaultValue = "") String searchWord){
		List<Board> lst = iServ.selectBoard(curPage, selectOpt, searchWord);
		
		model.addAttribute("search", iServ.getSearch());
		model.addAttribute("navi", iServ.getNavi(curPage, selectOpt, searchWord));
		model.addAttribute("boardLst", lst);
		return "forward:/board";
	}
	@RequestMapping("writeProc")
	public String writeProc(Board board) {
		iServ.insertProc(board);
		return "redirect:/board/selectBoard";
	}
			
}







