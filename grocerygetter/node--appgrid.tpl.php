<script type="text/javascript">
	function disable(){
	links=document.getElementsByTagName('A');
	for(var i=0; i<links.length; i++) {
	if (links[i] == "http://siramix.localhost/?q=node/15")
	{
	links[i].href="javascript:return false";
	}
	   }
	}

	window.onload=disable;
</script>