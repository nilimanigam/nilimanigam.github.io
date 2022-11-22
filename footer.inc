<?PHP
$mtime = date("m/d/y g:i:s A", filemtime($PATH_TRANSLATED));
if($contact_addr==""){
	$contact="<a href='mailto:%6e%69%67%61%6d%40%6d%61%74%68%2e%6d%63%67%69%6c%6c%2e%63%61'><FONT color='#FFFFFF'> nigam at math dot mcgill dot ca</A>";
}
else{
	$contact="<a href='mailto:" . $contact_addr . "'><FONT color='#FFFFFF'>" . $contact_addr . "</A>";
}
?>

	</TD></TR>
 	<!--Close page table row started in header.inc-->
	
	<TR><TD VALIGN="BOTTOM">
	    <!--Start Footer Table-->
		<TABLE WIDTH="100%" CELLSPACING="0" CELLPADDING="6" border=0>
			<TR><TD VALING="MIDDLE" BGCOLOR="#006600">
				<FONT FACE="helvetica,arial" size="-1" color="#FFFFFF"><B>
				Page Last Modified:</B> <?echo $mtime ?>
			</TD>
			<TD VALING="MIDDLE" align="right" BGCOLOR="#006600">
				<FONT FACE="helvetica,arial" size="-1" color="#FFFFFF"><B>
				Contact:</B> <?echo $contact ?>
			</TD></TR>
		</TABLE>
		<!--End Footer Table-->
	
	</TD></TR>
</TABLE>
<!--End Page Table-->
<A HREF="/cgi-bin/people.cgi"> </A>
</CENTER>
</BODY>
</HTML>
<!--Close the document-->
