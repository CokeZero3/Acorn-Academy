package com.care.Board;

import java.util.List;

public interface IService {
	public List<Board> selectBoard(String curPage);
	public Board detailRead(String no);
}
