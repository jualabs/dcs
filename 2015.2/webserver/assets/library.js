
function enviar(campo,valor,arra){
	var arr = jQuery.parseJSON(arra)
	var parametros = "";
	arr[campo] = valor;
	
	
	var parametros = {};
	parametros["nome"] = "iri";
	$.post("enviar.php",arr,function(data){
			var result = jQuery.parseJSON(data);
			//alert(result.mensagem);
			
			if(result.mensagem != false){
				mensagemRetorno(result.mensagem, result.tipo);
			}
			
			if(result.valores != false){
				//mensagemRetorno(result.valores, result.tipo);
				setTimeout(function(){window.location='index.php?'+result.valores},500);
			}
					
	});
	
}

function mensagemRetorno(mensagem){
	var NAME = document.getElementById("mensagemRetornoHome");
	
	NAME.className = "alert alert-info";
	
	$("#mensagemRetornoHome").html(mensagem);
	$("#mensagemRetornoHome").slideDown(500);	
	//$("#mensagemRetornoHome").slideDown(500).delay(2000).slideUp(500);
	//$("#mensagemRetornoHome").show(500).delay(2000).hide(500);		
}


