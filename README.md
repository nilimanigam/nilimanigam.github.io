# nilimanigam.github.io
Nilima Nigam's Webpage
<!DOCTYPE html>
<html>
  <head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <title>Nilima Nigam</title>
    <style type="text/css">
    
    #titleDiv {
      text-align: center;
      color: black;
      font-family: "Helvitica";
      letter-spacing: 2px;
      font-size: 35px;
      font-weight: bold;
      
      margin: auto;
      width:300px;
      height:50px;
      background-color:lightblue;
    }
      
    #titleDiv:hover {
      color:lightblue;
      background-color:black
    }
     
    #titleTable{
      /*width:52%;*/
      border:0;
      margin-left: auto;
      margin-right: auto;
      width:982px;
    }
      
    #repubTd{
      color:black;
      width:300px;
      font-family: "Helvitica";
      font-size: 20px;
      text-align: left;
    }
      
    #teposTd{
      color:black;
      width:300px;
      font-family: "Helvitica";
      font-size: 20px;
      text-align: right;
    }
      
    #subtitleDiv:hover {
      color:lightblue;
      text-decoration:underline solid lightblue;
    }
      
    #bannerImg{
      display: block;
      margin-left: auto;
      margin-right: auto;
      width:982px;
      height:auto;
    }
      
    #textTable{
      /*width:35%;*/
      border:0;
      margin-left: auto;
      margin-right: auto;
      width:668px;
    }
      
    #textTableBorder{
      /*width:35%;*/
      border:1px solid black;
      margin-left: auto;
      margin-right: auto;
      width:668px;
    }
      
    #introTd{
      color:black;
      font-family: "Helvitica", san serif;
      font-size: 20px;
      text-align:justify;
      text-justify: inter-word;
    }
      
    #locationTd{
      color:black;
      font-family: "Helvitica", san serif;
      font-size: 30px;
      text-align:center;
      border:1;
      
    }
      
    #contactLeftTd{
      color:black;
      font-family: "Helvitica";
      font-size: 30px;
      text-align:left;
    }
    
    #contactRightTd{
      color:black;
      font-family: "Helvitica",san serif;
      font-size: 20px;
      text-align:right;
      font-style:italic;
    }
      
    #divideLine{
      text-align: center;
    }
      
    #footerLeftTd{
      text-align:left;
      color:black;
      font-family: "Helvitica";
      font-size: 15px;
      font-style:italic;
      /*width:491px;*/
    }
      
    #footerRightTd{
      text-align:right;
      color:black;
      font-family: "Nirmala UI";
      font-size: 15px;
      font-style:italic;
      /*width:491px;*/
    }
      
    #subSectionDiv{
      text-align: center;
      color: black;
      font-family: "Nirmala UI";
      letter-spacing: 2px;
      font-size: 30px;
      font-weight: none;
    }
      
    a{
      text-decoration: none;
      color:black;
    }
    
    </style>
  </head>
  <body>
    <p></p>
    <br>
    <table id="titleTable">
      <tbody>
        <tr>
          <td id="repubTd"> <a href="nilRePub.html">
              <div id="subtitleDiv">RESEARCH &amp; PUBLICATIONS</div>
            </a></td>
          <td style="width: 300px"><a href="nilHome.html">
              <div id="titleDiv">NILIMA NIGAM</div>
            </a> </td>
          <td id="teposTd"> <a href="nilTePos.html">
              <div id="subtitleDiv">TEACHING &amp; POSITIONS</div>
            </a> </td>
        </tr>
      </tbody>
    </table>
    <p></p>
    <br>
    <img id="bannerImg" src="banner%201.1.png" alt=""> <br>
    <br>
    <div id="subSectionDiv"> WELCOME </div>
    <br>
    <table id="textTable">
      <tbody>
        <tr>
          <td  font family="Helvitica", sans serif;> I am a Professor of Mathematics at Simon Fraser
            University. I work on the development and analysis of numerical
            methods for scattering and spectral problems, including FEM and
            integral equation methods.  Apart from this, I enjoy using
            mathematics to solve real-world problems wherever they arise. I'm particularly interested in applications of mathematics in physiology.
            <br>
              I currently
            serve on the editorial boards of the Mathematics-in-Industry Case Studies,
            Computers and Mathematics with Applications, and SIAM News. I also serve
            on the series editorial boards of the CMS/CAIMS Book Series in
            Mathematics, and the SIAM Book Series on Mathematics and
            Computation.<br>
          </td>
        </tr>
      </tbody>
    </table>
    <br>
    <br>
    <br>
    <table id="textTableBorder">
      <tbody>
        <tr>
          <td><br>
            Office SC K10535<br>
            Department of Mathematics<br>
            Simon Fraser University<br>
            8888 University Drive<br>
            Burnaby, BC, V5A 1S6, Canada <br>
            <br>
          </td>
        </tr>
      </tbody>
    </table>
    <br>
    <br>
    <br>
    <table id="textTable">
      <tbody>
        <tr>
          <td id="contactLeftTd"> Phone<br>
            Fax<br>
            Email <br>
          </td>
          <td id="contactRightTd"> 778-782-4258<br>
            778-782-4927<br>
            nigam@math.sfu.ca <br>
          </td>
        </tr>
      </tbody>
    </table>
    <br>
    <br>
    <br>
    <br>
    <div id="divideLine">
      ___________________________________________________________________________________________________________________________
      </div> <br>
    <table id="titleTable">
      <tbody>
        <tr>
          <td id="footerLeftTd"> Nilima Nigam<br>
            Professor of Mathematics<br>
          </td>
          <td id="footerRightTd"> Dept. of Mathematics<br>
            Simon Fraser University<br>
          </td>
        </tr>
      </tbody>
    </table>
    <script>
      
      window.addEventListener('scroll',()=> {
        const num=window.scrollY;
        //alert(num);
        if (num>=0 && num<20)
          document.getElementById("bannerImg").src = "banner%201.1.png";
        
        if (num>=20 && num<40)
          document.getElementById("bannerImg").src = "banner%201.1%20deg1.png";
        
        if (num>=40 && num<60)
          document.getElementById("bannerImg").src = "banner%201.1%20deg2.png";
        
        if (num>=60 && num<80)
          document.getElementById("bannerImg").src = "banner%201.1%20deg3.png";
        
        if (num>=80 && num<100)
          document.getElementById("bannerImg").src = "banner%201.1%20deg4.png";
        
        if (num>=100 && num<120)
          document.getElementById("bannerImg").src = "banner%201.1%20deg5.png";
        
        if (num>=120 && num<140)
          document.getElementById("bannerImg").src = "banner%201.1%20deg6.png";
        
        if (num>=140 && num<160)
          document.getElementById("bannerImg").src = "banner%201.1%20deg7.png";
        
        if (num>=160)
          document.getElementById("bannerImg").src = "banner%201.1%20deg8.png";
      });
        
    </script>
  </body>
</html>
