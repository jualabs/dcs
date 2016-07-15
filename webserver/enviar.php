<?php
$save_variables = array("emergency","daybreak","warm","presence_students","presence_class","presence_hall","presence_wc","full_capacity_students","allowed_class");

session_start();
//$variaveis_retorno = array();
$valores = "";

$return = array();
$return['valores'] = false;
$return['mensagem'] = false;


//save to variables

foreach($_POST as $key => $value){
	if(in_array($key, $save_variables)){
		$_SESSION[$key]=$value;
	}
} 
	
	
$url = "https://supervisory-control-glaucogoncalves.c9users.io:8082/?";

foreach($_POST as $key => $value){
	$url .= $key."=".$value."&";
} 
$url =  substr($url, 0, -1);

$ch=curl_init();
curl_setopt($ch,CURLOPT_URL,$url);
curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
$result = curl_exec($ch);
curl_close($ch);

//$return['mensagem'] = $result;

$array =  (array) json_decode($result);



foreach($array as $key => $value){
	$valores .= $key."=".$value."&";
} 
$valores =  substr($valores, 0, -1);
$return['valores'] = $valores;
	
	



echo json_encode($return);

?>