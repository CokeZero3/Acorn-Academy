package com.care.Board;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class BoardService implements IService{
	@Autowired
	private IDao iDao;
	
	private final int BLOCKSIZE = 4;
	
	@Override
	public List<Board> selectBoard(String curPage) {
		Map<String, Integer> map = new HashMap<String, Integer>();
		
		int pageNum = 0;
		if(curPage !=null)	pageNum = Integer.parseInt(curPage)-1;
		//1~4 rnum >0 && rnum <=4
		//5~8 rnum >4 && rnum <=8
		//9~12 rnum>8 && rnum <=12
		map.put("start", pageNum* BLOCKSIZE);
		map.put("end", (pageNum+1)* BLOCKSIZE);
		
		return iDao.selectBoard(map);
	}

	@Override
	public Board detailRead(String no) {
		return iDao.detailRead(
				Integer.parseInt( no)
				);
	}

}






