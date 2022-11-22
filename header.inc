<!----- heavily inspired by Dept. website! thanks to Ben and Greg. --------------------!>

<?PHP

function getimage($img){
	global$graphics_dir;
	echo $graphics_dir . $img;
}


//Base Graphics Directory. Make sure this has a trailing slash.
$graphics_dir = "";

//Default tab images and links;

$tab_department = "<A HREF='/department/list_people.php'><IMG BORDER='0' 
SRC='${graphics_dir}tab_g_department.png'></A>";

//Submenu default size
$submenu_size=0;

switch ($tab){
	
	case "department":
		$tab_department = "<IMG BORDER='0' SRC='${graphics_dir}tab_b_department.png'>";
                $sub_main= "<A HREF='index.php'><IMG height='1' width='4' SRC='dot_lblue.png'><font color='#006600' face='helvitica, 
ariel'><b>Main</b></font></A>";
		$sub_teaching = "<A HREF='teaching.php'><IMG height='1' width='4' SRC='dot_lblue.png'><font color='#006600' face='helvitica, 
ariel'><b>Teaching</b></font> </A>";		
		$sub_publications = "<A HREF='publications.php'><font color='#006600' face='helvitica,ariel' ><b>Publications</b></font></A>";
		$sub_research = "<A HREF='research.php'><font color='#006600' face='helvitica, ariel'><b>Research</b></font></A>";
                $sub_spacer ="<IMG height='5' width='5' SRC='dot_lblue.png'>";
        if (!$sub) $sub = "main";
        switch ($sub){
        	case "main":
        		$sub_main= "<A HREF='index.php'><Font color='white' face='helvitica, ariel'><b>Main</font></d></A>";
        		break;
        	case "teaching":
        		$sub_teaching = "<A HREF='teaching.php'><Font color='white' face='helvitica, ariel'><b>Teaching</b></font></A>";
        		break;
      
        	case "publications":
        		$sub_publications = "<A HREF='publications.php'><Font color='white' face='helvitica, ariel'><b>Publications</b></font></A>";
        		break;
        	case "research":
        		$sub_research = "<A HREF='research.php'><font color='white' face='helvitica, ariel'><b>Research</b></A>";
        		break;
        
        	default:
		       $sub_main = "<A HREF='index.php'><Font color='white' face='helvitica, ariel'><b>Main</b></font></A>";
        		break;
		}
		$submenu=array($sub_main,$sub_spacer,$sub_research,$sub_spacer,$sub_publications,$sub_spacer,$sub_teaching,$sub_spacer);
        break;



	
	default:
		$tab_welcome = "<IMG SRC='${graphics_dir}tab_b_welcome.png'>";
		$sub_spacer ="<IMG height='5' width='5' SRC='dot_lblue.png'>";
		$submenu=array($sub_spacer);
		break;
}
?>

<HTML>
<HEAD>
<TITLE><? echo $title ?></TITLE>
</HEAD>

<BODY BGCOLOR="#FFFFFF" LINK="#006600" VLINK="#006600" marginheight="0" 
topmargin="0" vspace="0" marginwidth="0" leftmargin="0" hspace="0" 
style="margin-left:0; margin-right:0">


<style>
A:active{
Êcolor : #ffffff;
ÊTEXT-DECORATION: underline
}
A:link{
Êcolor : #ffffff;
ÊTEXT-DECORATION: underline
}
A:visited{
Êcolor : #ffffff;
ÊTEXT-DECORATION: underline
}
A:hover{
Êcolor : #ffffff;
ÊTEXT-DECORATION: underline
}
</style> 

<CENTER>
<form align="middle" method="post" action="/cgi-bin/htsearch" target="_top">

<!--Begin Page Table (this table ends in footer.inc)-->
<TABLE WIDTH="100%" HEIGHT="100%" CELLSPACING=0 CELLPADDING=0 border=0>
<TR><TD VALIGN="TOP">

<!--Begin Menu Table-->
<TABLE WIDTH="100%" CELLSPACING=0 CELLPADDING=0 border=0>
	<TR BGCOLOR="#ffffff">
	<TD BGCOLOR="#ffffff">
		<!--Begin Logo and Search Box Table-->
		<TABLE WIDTH="100%" CELLSPACING=0 CELLPADDING=0 border=0 >
		<TR>

 <!--TD VALIGN="top" align="left" bgcolor="#00000>
                <MAP NAME="math">
                <AREA SHAPE="rect" HREF="http://www.math.sfu.ca" 
COORDS="0,0,588,37">
                </MAP--!>
                <TD valign="top" ALIGN="right"><IMG USEMAP="#math"
SRC="mathbanner.png" BORDER="0">
</td>

                <TD VALIGN="MIDDLE" align="left" bgcolor="#ffffff">
<IMG height='1' width='4' SRC='../dot_lblue.png'>
	        <FONT FACE="helvetica,arial"  color="#006600"><B>
	         Nilima Nigam <BR>
<IMG height='1' width='4' SRC='../dot_lblue.png'>
	         Associate Professor of Mathematics</B></BR>
	         <FONT FACE="helvetica,arial" size="-1" color="#006600">
<IMG height='1' width='4' SRC='../dot_lblue.png'>
	          SC K10509<BR>
<IMG height='1' width='4' SRC='../dot_lblue.png'>
	          Tel: 778-782-4258<BR>
	          
          

 	<TABLE CELLSPACING=0 CELLPADDING=0 BORDER=0><TR>
		<?
			for ($item=0;$item<count($submenu);$item++){
				echo "	    	<TD>" . $submenu[$item] . "</TD>";
			}
		?>	    	
	    	</TR>
	    </TABLE>

                </TD>		
             </TR>
		</TABLE>
		<!--End Logo and Search Box Table-->		
	</TD></TR>	
	

	    <!--End Sub Menu Table-->		
	</TD></TR>
</TABLE>
<!--End Menu Table-->	
</FORM>
	
<!--Note that there is one open table row from the page table that will be closed in footer.inc-->	


