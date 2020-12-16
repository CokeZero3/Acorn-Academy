//customer
tableTag +=("<table>");
    tableTag +=("<tr>");
    tableTag +=("<td>customerID</td>");
    tableTag +=("<td>customerName</td>");
    tableTag +=("<td>ContactName</td>");
    tableTag +=("<td>Address</td>");
    tableTag +=("<td>City</td>");
    tableTag +=("<td>PostalCode</td>");
    tableTag +=("<td>Country</td>");
    while(rs.next()){
       tableTag +=("<tr>");
       tableTag +=("<td>" + rs.getString("customerID") + "</td>");
       tableTag +=("<td>" + rs.getString("customerName") + "</td>");
       tableTag +=("<td>" + rs.getString("ContactName") + "</td>");
       tableTag +=("<td>" + rs.getString("Address") + "</td>");
       tableTag +=("<td>" + rs.getString("City") + "</td>");
       tableTag +=("<td>" + rs.getString("PostalCode") + "</td>");
       tableTag +=("<td>" + rs.getString("Country") + "</td>");
    tableTag +=("</tr>");
    }
    tableTag +=("</table>");


//categories
tableTag +=("<table>");
    tableTag +=("<tr>");
    tableTag +=("<td>CategoryID</td>");
    tableTag +=("<td>CategoryName</td>");
    tableTag +=("<td>Description</td>");
    while(rs.next()){
       tableTag +=("<tr>");
       tableTag +=("<td>" + rs.getString("CategoryID") + "</td>");
       tableTag +=("<td>" + rs.getString("CategoryName") + "</td>");
       tableTag +=("<td>" + rs.getString("Description") + "</td>");

       tableTag +=("</tr>");
    }
    tableTag +=("</table>");