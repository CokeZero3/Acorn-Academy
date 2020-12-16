package com.care.Board;

import java.util.List;
import java.util.Map;

public interface IDao {
	public List<Board> selectBoard(Map<String, Integer> map);
	public Board detailRead(int no);
}
