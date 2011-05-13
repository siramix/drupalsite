<?php 
global $base_url 
?>

<script type="text/javascript">
	function disable(){
	links=document.getElementsByTagName('A');
	for(var i=0; i<links.length; i++) {
	if (links[i] == "<?php print($base_url); ?>/?q=moretocome" || 
	    links[i] == "<?php print($base_url); ?>/moretocome" )
	{
	links[i].href="javascript:return false";
	}
	   }
	}

	window.onload=disable;
</script>