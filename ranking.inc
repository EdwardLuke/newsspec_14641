<!--#if expr="$QUERY_STRING = /id=([a-zA-Z0-9_]+)&service=([a-zA-Z0-9_-]+)/" -->
  <!--#set var="ID" value="$1" -->
  <!--#set var="SERVICE" value="$2" -->
  <div id="hearkenranking<!--#echo var="ID" -->" class="ranking-module" data-pym-src="http://modules.wearehearken.com/<!--#echo var="SERVICE" -->/voting_modules/<!--#echo var="ID" -->?pa=f" style="margin-top: 1.5em;"></div>
  <script src="//assets.wearehearken.com/production/thirdparty/p.m.js"></script>
<!--#endif -->