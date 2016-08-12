# newsspec_14641 - Hearken Plugins, in BBC style

Ther are two plugins:

## Curiosity Module

Let users ask questions about the content on the page.
The docs for configuring this module, using the Hearken admin panel are here: http://help.wearehearken.com/article/23-configure-curiosity-module

Example: http://www.stage.bbc.co.uk/news/special/2016/newsspec_14641/curiosity.inc

You can view this module directly at the Hearken website here: http://modules.wearehearken.com/wndr/curiosity_modules/249?pa=f

## Ranking/Voting Module

Users can vote on questions, choosing which ones they would prefer to see answered.
The docs for configuring this module, using the Hearken admin panel are here: http://help.wearehearken.com/article/59-configure-voting-module

You can view this module directly at the Hearken website here: [link needed]

## In this repo:

This repo contains the include files for the Hearken plugins. 
The inc files contain the embed markup required to add the plugins to the page. 
It is a small bit of markup, with pym.js being called to create the iframed plugin.

This repo also contains the css file which is used to style both plugins.
The URL of the CSS file is added into the plugin admin panel, on the Hearken website.

## Hearken Docs

Hearken uses an admin panel for configuring the styles, text and options of their plugins. 
The embed code can be copied from the admin panel for the relevant plugin.

You can login to the admin panel here: https://wndr.wearehearken.com/identities/sign_in

## Deployment

Copy the .inc and .css files to stage/live, and then FTP as usual. 
Then add the include path for each (or your chosen) plugin to a CPS page as usual.
The plugin(s) should then appear in the page, styled inthe BBC style.
