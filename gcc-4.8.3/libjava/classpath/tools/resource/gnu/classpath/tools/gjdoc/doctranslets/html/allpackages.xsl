<?xml version="1.0" encoding="utf-8"?>

<!-- allpackages.xsl
     Copyright (C) 2003 Free Software Foundation, Inc.
     
     This file is part of GNU Classpath.
     
     GNU Classpath is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation; either version 2, or (at your option)
     any later version.
      
     GNU Classpath is distributed in the hope that it will be useful, but
     WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
     General Public License for more details.
     
     You should have received a copy of the GNU General Public License
     along with GNU Classpath; see the file COPYING.  If not, write to the
     Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
     02111-1307 USA.
     -->

<!-- Creates the allpackages.html file for HTML documentation. 
     -->

<xsl:stylesheet version="1.0"
  xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
  xmlns:gjdoc="http://www.gnu.org/software/cp-tools/gjdocxml"
  xmlns:html="http://www.w3.org/TR/REC-html40"
  xmlns="http://www.w3.org/TR/REC-html40">

  <xsl:include href="html_common.xsl"/>

  <xsl:output method="xml"
    encoding="utf-8"
    indent="no"/>

  <xsl:strip-space elements="*"/>

  <xsl:template match="/">
    <html>
      <head>
        <title>
          <xsl:if test="document('index.xml',/)/gjdoc:rootdoc/gjdoc:title">
            <xsl:value-of select="document('index.xml',/)/gjdoc:rootdoc/gjdoc:title"/>
            <xsl:text> - </xsl:text>
          </xsl:if>
          <xsl:text>Packages</xsl:text>
          <xsl:value-of select="@name"/>
        </title>
        <xsl:call-template name="include_common"/>
      </head>
      <body class="menu allpackages">
        <h3 class="menu-title">
          <a href="index_noframes.html" target="content">
            <xsl:choose>
              <xsl:when test="document('index.xml',/)/gjdoc:rootdoc/gjdoc:title">
                <xsl:value-of select="document('index.xml',/)/gjdoc:rootdoc/gjdoc:title"/>
              </xsl:when>
              <xsl:otherwise>
                <xsl:text>Packages</xsl:text>
              </xsl:otherwise>
            </xsl:choose>
          </a>
        </h3>
        <a href="allclasses.html" target="classes" class="menu allpackages">All Classes</a><br/><br/>
        <xsl:for-each select="gjdoc:rootdoc/gjdoc:specifiedpackage/@name">
          <xsl:sort select="." order="ascending"/>
          <a href="{concat(translate(., '.','/'), '/classes.html')}" target="classes" class="menu allpackages">
            <xsl:value-of select="."/>
          </a>
          <br/>
        </xsl:for-each>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>
