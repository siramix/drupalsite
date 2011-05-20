<?php 
global $base_url
?>

<script type="text/javascript">
/* <![CDATA[ */
	function disable() {
		links=document.getElementsByTagName('A');
		for(var i=0; i<links.length; i++) {
			if (links[i] == "<?php print($base_url); ?>/?q=moretocome" || 
					links[i] == "<?php print($base_url); ?>/moretocome" ) {
				links[i].href="#";
			}
		}
	}

	window.onload=disable;
/* ]]> */
</script>