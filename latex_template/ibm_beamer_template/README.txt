This is a IBM beamer theme adapted from a LaTex theme found below:

    http://www.ist.tugraz.at/staff/weiglhofer/misc/tugbeamer/

Current directory also contains the original theme
for furture reference:

    latex-beamer-tugraz.tgz

User Manaual copied from Website above:

Install
=======

In order to install this beamer theme you have to do the following steps:

Unpack the archive from the download section into the theme folder of the LaTeX-Beamer package (e.g. /usr/share/texmf/tex/latex/beamer/themes/).
Run mktexlsr

Usage
=====

As for every other beamer theme you have to use the document calss beamer:

    \documentclass{beamer}

Select the theme by the following statements:

    \mode<presentation>
    {
      \usetheme[sidebar=1,sidebarskip=2]{Graz}
      \setbeamercovered{transparent}
    }

Note, that this theme supports the following two arguments:

sidebar: Allows to turn the sidebar (presentation outline on left hand side) on and off. Use 1 if the sidebar should be visible and 0 otherwise.
sidebarskip=n: Allows to set the content of sidebar invisible for n pages. This can be used to hide the presentation's content on the title-page and on some introductory slides.
The logo of the university and the logo of the institute have to be specified by following commands. Replace images/uni_logo and images/inst_logo with the paths to your logos.

    \pgfdeclareimage[height=0.5cm]{university-logo}{images/uni_logo}
    \logo{\pgfuseimage{university-logo}}

    \pgfdeclareimage[height=0.5cm]{institute-logo}{images/inst_logo}
    \sublogo{\pgfuseimage{institute-logo}\vspace*{-0.5cm}}


IBM theme usage
==================

You can directly place those four theme files with IBM logo under your beamer file directory. "ibm.tex" is 
a beamer template that you can build your presentation based upon.
