package com.care.Board;

import java.util.List;
import java.util.Map;

public interface IDao {
	public List<Board> selectBoard(Map<String, Object> map);
	public Board detailRead(int no);
	public int selectBoardCnt(Map<String, String> map);
	public void deleteBoard(String [] delNo);
}
