package com.care.Board;

import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.care.Common.BoardTools;

@Service
public class BoardService implements IService{
	@Autowired
	private IDao iDao;
	
	private final int BLOCKSIZE = 4;
	private final String NAVIURL="/WebPage/board/selectBoard";
	private final String CURRENTPAGE="curPage=";
	private final String SEARCHOPT="searchSelect=";
	private final String SEARCHWORD="search=";
	
	private String getSearchOpt(String opt) {
		if("累己磊".contentEquals(opt))	return "id";
		else if("力格".contentEquals(opt))	return "title";
		return "all";
	}
	@Override
	public List<Board> selectBoard(String curPage, String searchOpt, String searchWord) {
		Map<String, Object> map = new HashMap<String, Object>();
		
		/*
		 * int pageNum = 0; if(curPage !=null) pageNum = Integer.parseInt(curPage)-1;
		 */
		/* if(searchOpt==null) searchOpt=""; */
		int pageNum = Integer.parseInt(curPage)-1;
		
		map.put("start", pageNum* BLOCKSIZE);
		map.put("end", (pageNum+1)* BLOCKSIZE);
		map.put("searchOpt", getSearchOpt(searchOpt));
		map.put("searchWord", /* searchWord==null?"": */searchWord);
		
		return iDao.selectBoard(map);
	}

	@Override
	public Board detailRead(String no) {
		return iDao.detailRead(
				Integer.parseInt( no)
				);
	}

	@Override
	public String getNavi(String curPage, String searchOpt, String searchWord) {
		Map<String, String> map = new HashMap<String, String>();
		int pageNum = Integer.parseInt(curPage);
		searchOpt = getSearchOpt(searchOpt);
		
		try {	searchWord= URLEncoder.encode(searchWord, "UTF-8");	} 
		catch (UnsupportedEncodingException e) {e.printStackTrace();	}
		
		map.put("searchOpt", searchOpt);
		map.put("searchWord", searchWord);
		return BoardTools.getNavi(pageNum, BLOCKSIZE, 
				iDao.selectBoardCnt(map), 
				NAVIURL+"?"+
				SEARCHOPT+searchOpt+"&"+
				SEARCHWORD +searchWord +"&"+
				CURRENTPAGE);
	}

	@Override
	public String getSearch() {
		List<String> lst = new ArrayList<String>();
		lst.add("傈眉");
		lst.add("累己磊");
		lst.add("力格");
		
		return BoardTools.getSearchWord(lst, "searchWord();");
	}
	@Override
	public void deleteBoard(String delNo) {
			iDao.deleteBoard(delNo.split(" "));	
	}
	@Override
	public void insertProc(Board board) {
		iDao.insertProc(board);		
	}
}






