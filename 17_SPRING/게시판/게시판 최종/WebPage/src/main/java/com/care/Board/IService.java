package com.care.Board;

import java.util.List;

public interface IService {
	public List<Board> selectBoard(String curPage, String searchOpt, String searchWord);
	public Board detailRead(String no);
	public String getNavi(String curPage, String searchOpt, String searchWord);
	public String getSearch();
	public void deleteBoard(String delNo);
	public void insertProc(Board board);
}
