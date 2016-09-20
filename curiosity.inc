<!--#if expr="$QUERY_STRING = /id=([a-zA-Z0-9_]+)&service=[a-zA-Z0-9_]/" -->
  <!--#set var="ID" value="$1" -->
  <!--#set var="SERVICE" value="$2" -->
  <div id="hjf21" class="curiosity-module" data-pym-src="https://modules.wearehearken.com/<!--#echo var="SERVICE" -->/curiosity_modules/<!--#echo var="ID" -->?pa=f"></div>
  <script src="//assets.wearehearken.com/production/thirdparty/p.m.js"></script>
<!--#endif -->