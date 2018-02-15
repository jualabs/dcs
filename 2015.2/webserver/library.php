<?php
$status = array(
	0 => 'off',
	1 => 'on'
);

function statusComp($inuse,$off,$susp){
	//echo $inuse.$off.$susp;
	if($inuse == 1){
		echo "inuse";
	}elseif($off == 1){
		echo "off";
	}elseif($susp == 1){
		echo "susp";
	}
}

function statusDoor($opned,$locked){
	//echo $opned.$locked
	if($opned == 1){
		echo "opned";
	}elseif($locked == 1){
		echo "locked";
	}
}


function statusRules($dark,$lit,$well_lit){
	//echo $opned.$locked
	if($dark == 1){
		echo "DARK";
	}elseif($lit == 1){
		echo "LIT";
	}elseif($well_lit == 1){
		echo "WELL LIT";
	}
}

?>