<?php
require_once 'library.php';
session_start();

if(isset($_POST['restart_system'])){
	session_destroy();
	header('Location:index.php');
	exit;
}

$output_parameter = array(
	"ac1_status_students" => 0,
	"ac2_status_students" => 0,
	"ac1_status_class" => 0,
	"ac2_status_class" => 0,
	"ac1_status_hall" => 0,
	"ac2_status_hall" => 0,
	
	"comp1_off_class" => 1,
	"comp1_inuse_class" => 0,
	"comp1_susp_class" => 0,
	
	"comp1_off_students" => 1,
	"comp1_inuse_students" => 0,
	"comp1_susp_students" => 0,
	
	"lamp_on_students" => 0,
	"lamp_on_class" => 0,
	"lamp_on_hall" => 0,
	"lamp_on_wc" => 0,
	"shutter_opened_students" => 0,
	"shutter_opened_class" => 0,
	"shutter_opened_hall" => 0,
	
	"lp_dark_students" => 1,
	"lp_lit_students" => 0,
	"lp_well_lit_students" => 0,
	"lp_dark_hall" => 1,
	"lp_lit_hall" => 0,
	"lp_well_lit_hall" => 0,
	"lp_dark_class" => 1,
	"lp_lit_class" => 0,
	"lp_well_lit_class" => 0,
);


$input_parameter = array(	
	"emergency" => 0,
	"daybreak" => 0,
	'warm' => 0,
	"presence_students" => 0,
	"presence_class" => 0,
	"presence_hall" => 0,
	"presence_wc" => 0,
		
	"ac1_onoff_students" => 0,
	"ac2_onoff_students" => 0,
	"ac1_onoff_class" => 0,
	"ac2_onoff_class" => 0,
	"ac1_onoff_hall" => 0,
	"ac2_onoff_hall" => 0,
		
	"comp1_sw_on_students" => 0,
	"comp1_sw_off_students" => 0,
	
	"comp1_sw_on_class" => 0,
	"comp1_sw_off_class" => 0,
	
	"lp_up1_students" => 0,
	"lp_up2_students" => 0,
	"lp_down1_students" => 0,
	"lp_down2_students" => 0,
	"lp_up1_class" => 0,
	"lp_up2_class" => 0,
	"lp_down1_class" => 0,
	"lp_down2_class" => 0,
	"lp_up1_hall" => 0,
	"lp_up2_hall" => 0,
	"lp_down1_hall" => 0,
	"lp_down2_hall" => 0
);

//get variables save
//print_r($input_parameter);
//echo "<br> ********".$input_parameter['warm']."*********<br>";
foreach($_SESSION as $key => $value){
	if(array_key_exists($key,$input_parameter)){
		$input_parameter[$key]=$value;
	}
}
//print_r($input_parameter);

foreach ($_REQUEST as $key => $value){
	if(array_key_exists($key,$output_parameter)){
		$output_parameter[$key] = $value;
	}
}
 
$input_parameter_send = json_encode($input_parameter);
$input_parameter_send = str_replace('"','\"',$input_parameter_send);


?>

<!DOCTYPE html>
<html lang="pt-br">
<head>

    <meta charset="Content-Type: text/html; charset=UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>UFRPE - Modelagem</title>
    
    <!-- jQuery -->
    <script src="assets/bower_components/jquery/dist/jquery.min.js"></script>
    
    <!-- Bootstrap Core JavaScript -->
    <script src="assets/bower_components/bootstrap/dist/js/bootstrap.min.js"></script>

    <!-- Metis Menu Plugin JavaScript -->
    <script src="assets/bower_components/metisMenu/dist/metisMenu.min.js"></script>

    
    <!-- Custom Theme JavaScript -->
    <script src="assets/dist/js/sb-admin-2.js"></script>
			
	<!-- DataTables JavaScript -->
    <script src="assets/bower_components/dataTables/jquery.dataTables.min.js"></script>
    <script src="assets/bower_components/dataTables/dataTables.bootstrap.min.js"></script>
    
      
    <!-- Para poder a funcaao mask() e unmask() do Jquery Outro plugin -->
   	<script src="assets/mask/jquery.mask.js"></script>
    <script src="assets/mask/jquery.mask.min.js"></script>
    
    
    <!-- Todos os metodos  -->
    <script src="assets/library.js"></script>
    
       

    <!-- Bootstrap Core CSS -->
    <link href="assets/bower_components/bootstrap/dist/css/bootstrap.min.css" rel="stylesheet">

    <!-- MetisMenu CSS -->
    <link href="assets/bower_components/metisMenu/dist/metisMenu.min.css" rel="stylesheet">

    <!-- Timeline CSS -->
    <link href="assets/dist/css/timeline.css" rel="stylesheet">

    <!-- Custom CSS -->
    <link href="assets/dist/css/sb-admin-2.css" rel="stylesheet">

    <!-- Custom Fonts -->
    <link href="assets/bower_components/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
	
	<!-- DataTables CSS -->
    <link href="assets/bower_components/dataTables/dataTables.bootstrap.css" rel="stylesheet">

    <!-- DataTables Responsive CSS -->
    <link href="assets/bower_components/dataTables/dataTables.responsive.css" rel="stylesheet">
	
	

		
</head>

<body>

	
	        	

    <div id="wrapper">
    
    	    
		<div class="col-lg-12">
			<span class="help-block"></span>
		</div>
		
		<div class="col-md-8 col-md-offset-3">
		   	<div id="mensagemRetornoHome"></div>
		</div>
		
		<div class="col-lg-12">
			<div class="panel panel-default">
				<div class="panel-heading">
					Smart Building Control
				</div>
				
				<div class="panel-body">
									
					<div class="row">
					
						<!-- Inicio Esquerdo -->
						<div class="col-lg-4">
							
							<!-- Inicio global -->
							<div class="panel panel-default">
								<div class="panel-heading">
									Global
								</div>
								
								<div class="panel-body">
									<div class="row">
										<div class="col-lg-4">
											<button type="button" class="btn btn-<?php if($input_parameter['warm'] == 0){echo 'danger';}else{echo 'success';}?>" onclick='enviar("warm",<?php if($input_parameter['warm'] == 0){echo '1';}else{echo '0';}?>,"<?php echo $input_parameter_send;?>");'>Warm</button>
										</div>
										
										<div class="col-lg-4">
											<button type="button" class="btn btn-<?php if($input_parameter['emergency'] == 0){echo 'danger';}else{echo 'success';}?>" onclick='enviar("emergency",<?php if($input_parameter['emergency'] == 0){echo '1';}else{echo '0';}?>,"<?php echo $input_parameter_send;?>");'>Emergency</button>
										</div>
										
										<div class="col-lg-4">
											<button type="button" class="btn btn-<?php if($input_parameter['daybreak'] == 0){echo 'danger';}else{echo 'success';}?>" onclick='enviar("daybreak",<?php if($input_parameter['daybreak'] == 0){echo '1';}else{echo '0';}?>,"<?php echo $input_parameter_send;?>");'>Daybreak</button>
										</div>
									</div>								
								</div>	
							</div>
							<!-- Fim global -->
							
							<!-- Inicio Student's Lab  -->
							<div class="panel panel-default">
								<div class="panel-heading">
									Student's Lab 
								</div>
								
								<div class="panel-body">
									
									<div class="row">
										<div class="col-lg-12">
											<div class="panel panel-default">
												<div class="panel-heading">
													Lighting Police
												</div>
												
												<div class="panel-body">
													<div class="col-lg-3">
														<button type="button" class="btn btn-success" onclick='enviar("lp_up1_students","1","<?php echo $input_parameter_send;?>");'>UP 1</button>								
													</div>
													
													<div class="col-lg-3">
														<button type="button" class="btn btn-danger" onclick='enviar("lp_down1_students","1","<?php echo $input_parameter_send;?>");'>DOW 1</button>								
													</div>
													
													<div class="col-lg-3">
														<button type="button" class="btn btn-success" onclick='enviar("lp_up2_students","1","<?php echo $input_parameter_send;?>");'>UP 2</button>								
													</div>
													
													<div class="col-lg-3">
														<button type="button" class="btn btn-danger" onclick='enviar("lp_down2_students","1","<?php echo $input_parameter_send;?>");'>DOW 2</button>								
													</div>
																		
													<div class="col-lg-12">
														<span class="help-block"></span>
													</div>
												
											  
													<div class="col-lg-2 col-md-offset-5">
														<button type="button" class="btn btn-warning"><?php statusRules($output_parameter['lp_dark_students'],$output_parameter['lp_lit_students'],$output_parameter['lp_well_lit_students']); ?></button>								
													</div>					
												</div>	
											</div>	
										</div>
									
									</div>
									
									<div class="row">
										<div class="col-lg-12">
											<div class="panel panel-default">
												<div class="panel-heading">
													sensors
												</div>
												
												<div class="panel-body">
													<div class="col-lg-2 col-md-offset-4">
														<button type="button" class="btn btn-<?php if($input_parameter['presence_students'] == 0){echo 'danger';}else{echo 'success';}?>" onclick='enviar("presence_students",<?php if($input_parameter['presence_students'] == 0){echo '1';}else{echo '0';}?>,"<?php echo $input_parameter_send;?>");'>Presence</button>
													</div>
													
																	
												</div>	
											</div>
										</div>										
									</div>
									
									<div class="row">
										<span class="help-block"></span>
									</div>
									
									<div class="row">
										<span class="help-block"></span>
									</div>
									
									<div class="row">
										
										<!-- inicio shutter -->
										
										<div class="col-lg-12">
																						
											<div class="col-lg-6">
												<img height="40%" src="img/shutter_<?php echo $status[$output_parameter['shutter_opened_students']]; ?>.jpg" width="40%" >
											</div>
											
											<div class="col-lg-6">
												<img height="40%" src="img/lamp_<?php echo $status[$output_parameter['lamp_on_students']]; ?>.jpg" width="40%" >
											</div>
											
																		
										</div>
										<!-- fim shutter-->
															
									</div>
									
									
									<div class="row">
										<span class="help-block"></span>
									</div>
									
									
									<div class="row">
										
										<!-- inicio pc1 -->
										
										<div class="col-lg-6">
											<div class="col-lg-6">
												<div class="row">
													<button type="button" class="btn btn-success" onclick='enviar("comp1_sw_on_students","1","<?php echo $input_parameter_send;?>");'>switchon </button>
												</div>
												<span class="help-block"></span>
												<div class="row">
													<button type="button" class="btn btn-danger" onclick='enviar("comp1_sw_off_students","1","<?php echo $input_parameter_send;?>");'>switchoff</button>
												</div>
											</div>
											
											<div class="col-lg-6">
												<img height="130%" src="img/comp_<?php statusComp($output_parameter['comp1_inuse_students'],$output_parameter['comp1_off_students'],$output_parameter['comp1_susp_students']); ?>.jpg" width="130%" >
											</div>
											
																			
										</div>
										<!-- fim pc1-->
										
										
										
									</div>
									
									<div class="row">
										<span class="help-block"></span>
									</div>
																	
									<div class="row">
										
										<!-- inicio ac1 -->
										
										<div class="col-lg-6">
											
											<div class="col-lg-4">
												<button type="button" class="btn btn-success" onclick='enviar("ac1_onoff_students","1","<?php echo $input_parameter_send;?>");'>ON/OFF</button>
											</div>
											
											<div class="col-lg-8">
												<img height="70%" src="img/ac_<?php echo $status[$output_parameter['ac1_status_students']]; ?>.png" width="70%" >
											</div>
											
																		
										</div>
										<!-- fim ac1-->
										
										
										<!-- inicio ac2-->
										
										<div class="col-lg-6">
											
											<div class="col-lg-4">
												<button type="button" class="btn btn-success" onclick='enviar("ac2_onoff_students","1","<?php echo $input_parameter_send;?>");'>ON/OFF</button>
											</div>
											
											<div class="col-lg-8">
												<img height="70%" src="img/ac_<?php echo $status[$output_parameter['ac2_status_students']]; ?>.png" width="70%" >
											</div>
																													
										</div>
										<!-- fim ac2-->
										
									</div>
									
									
									
								</div>	
							</div>
							<!-- Fim Student's Lab  -->							
						
						</div>
						<!-- Fim Esquerdo -->
						
						
						<!-- Inicio Meio -->
						<div class="col-lg-4">
							<div class="row">
								<!-- Inicio Hall -->
								<div class="panel panel-default">
									<div class="panel-heading">
										Hall
									</div>
									
									<div class="panel-body">
									
										<div class="row">
											<div class="col-lg-12">
												<div class="panel panel-default">
													<div class="panel-heading">
														Lighting Police
													</div>
													
													<div class="panel-body">
														<div class="col-lg-3">
															<button type="button" class="btn btn-success" onclick='enviar("lp_up1_hall","1","<?php echo $input_parameter_send;?>");'>UP 1</button>								
														</div>
														
														<div class="col-lg-3">
															<button type="button" class="btn btn-danger" onclick='enviar("lp_down1_hall","1","<?php echo $input_parameter_send;?>");'>DOW 1</button>								
														</div>
														
														<div class="col-lg-3">
															<button type="button" class="btn btn-success" onclick='enviar("lp_up2_hall","1","<?php echo $input_parameter_send;?>");'>UP 2</button>								
														</div>
														
														<div class="col-lg-3">
															<button type="button" class="btn btn-danger" onclick='enviar("lp_down2_hall","1","<?php echo $input_parameter_send;?>");'>DOW 2</button>								
														</div>
																			
														<div class="col-lg-12">
															<span class="help-block"></span>
														</div>
													
												  
														<div class="col-lg-2 col-md-offset-5">
															<button type="button" class="btn btn-warning" ><?php statusRules($output_parameter['lp_dark_hall'],$output_parameter['lp_lit_hall'],$output_parameter['lp_well_lit_hall']); ?></button>								
														</div>					
													</div>	
												</div>	
											</div>
										
										</div>
										
																		
										<div class="row">
											<div class="col-lg-12">
												<div class="panel panel-default">
													<div class="panel-heading">
														sensors
													</div>
													
													<div class="panel-body">
														<div class="col-lg-4 col-md-offset-5">
															<button type="button" class="btn btn-<?php if($input_parameter['presence_hall'] == 0){echo 'danger';}else{echo 'success';}?>" onclick='enviar("presence_hall",<?php if($input_parameter['presence_hall'] == 0){echo '1';}else{echo '0';}?>,"<?php echo $input_parameter_send;?>");'>Presence</button>
														</div>					
													</div>	
												</div>
											</div>
										</div>
										
										<div class="row">
											<span class="help-block"></span>
										</div>
										
										<div class="row">
											<span class="help-block"></span>
										</div>
										
										<div class="row">
											
											<!-- inicio shutter -->
											
											<div class="col-lg-12">
																							
												<div class="col-lg-6">
													<img height="40%" src="img/shutter_<?php echo $status[$output_parameter['shutter_opened_hall']]; ?>.jpg" width="40%" >
												</div>
												
												<div class="col-lg-6">
													<img height="40%" src="img/lamp_<?php echo $status[$output_parameter['lamp_on_hall']]; ?>.jpg" width="40%" >
												</div>
																			
											</div>
											<!-- fim shutter-->
																
										</div>
										
										<div class="row">
											<span class="help-block"></span>
										</div>
																		
										
										
										<div class="row">
											
											<!-- inicio ac1 -->
											
											<div class="col-lg-6">
												
												<div class="col-lg-4">
													<button type="button" class="btn btn-success" onclick='enviar("ac1_onoff_hall","1","<?php echo $input_parameter_send;?>");'>ON/OFF</button>
												</div>
												
												<div class="col-lg-8">
													<img height="70%" src="img/ac_<?php echo $status[$output_parameter['ac1_status_hall']]; ?>.png" width="70%" >
												</div>
												
																			
											</div>
											<!-- fim ac1-->
											
											
											<!-- inicio ac2-->
											
											<div class="col-lg-6">
												
												<div class="col-lg-4">
													<button type="button" class="btn btn-success" onclick='enviar("ac2_onoff_hall","1","<?php echo $input_parameter_send;?>");'>ON/OFF</button>
												</div>
												
												<div class="col-lg-8">
													<img height="70%" src="img/ac_<?php echo $status[$output_parameter['ac2_status_hall']]; ?>.png" width="70%" >
												</div>
												
																			
											</div>
											<!-- fim ac2-->
											
										</div>								
									</div>	
								</div>
								<!-- Fim hall -->
							</div>
							
							<div class="row">
							<!-- Inicio WC -->
							<div class="panel panel-default">
								<div class="panel-heading">
									WC
								</div>
								
								<div class="panel-body">
									<div class="row">
										<div class="col-lg-6">
											<div class="panel panel-default">
												<div class="panel-heading">
													sensors
												</div>
												
												<div class="panel-body">
													<div class="col-lg-4 col-md-offset-2">
														<button type="button" class="btn btn-<?php if($input_parameter['presence_wc'] == 0){echo 'danger';}else{echo 'success';}?>" onclick='enviar("presence_wc",<?php if($input_parameter['presence_wc'] == 0){echo '1';}else{echo '0';}?>,"<?php echo $input_parameter_send;?>");'>Presence</button>								
													</div>
													
												
												</div>	
											</div>
										</div>
										
											
											<!-- inicio lamp -->											
											<div class="col-lg-6">
												<img height="4%" src="img/lamp_<?php echo $status[$output_parameter['lamp_on_wc']]; ?>.jpg" width="40%" >
											</div>
											<!-- fim lamp-->
											
															
										
									</div>
									
									
									
								</div>	
							</div>
							<!-- Fim WC -->
							</div>
							
							
						</div>
						<!-- Fim Meio -->
						
						<!-- Inicio Direita -->
						<div class="col-lg-4">
						
							
							<!-- Inicio Class Lab -->
							<div class="panel panel-default">
								<div class="panel-heading">
									Class Lab
								</div>
								
								<div class="panel-body">
								
									<div class="row">
										<div class="col-lg-12">
											<div class="panel panel-default">
												<div class="panel-heading">
													Lighting Police
												</div>
												
												<div class="panel-body">
													<div class="col-lg-3">
														<button type="button" class="btn btn-success" onclick='enviar("lp_up1_class","1","<?php echo $input_parameter_send;?>");'>UP 1</button>								
													</div>
													
													<div class="col-lg-3">
														<button type="button" class="btn btn-danger" onclick='enviar("lp_down1_class","1","<?php echo $input_parameter_send;?>");'>DOW 1</button>								
													</div>
													
													<div class="col-lg-3">
														<button type="button" class="btn btn-success" onclick='enviar("lp_up2_class","1","<?php echo $input_parameter_send;?>");'>UP 2</button>								
													</div>
													
													<div class="col-lg-3">
														<button type="button" class="btn btn-danger" onclick='enviar("lp_down2_class","1","<?php echo $input_parameter_send;?>");'>DOW 2</button>								
													</div>
																		
													<div class="col-lg-12">
														<span class="help-block"></span>
													</div>
												
											  
													<div class="col-lg-2 col-md-offset-5">
														<button type="button" class="btn btn-warning"><?php statusRules($output_parameter['lp_dark_class'],$output_parameter['lp_lit_class'],$output_parameter['lp_well_lit_class']); ?></button>								
													</div>					
												</div>	
											</div>	
										</div>
									
									</div>
									

								
								
									<div class="row">
										<div class="col-lg-12">
											<div class="panel panel-default">
												<div class="panel-heading">
													sensors
												</div>
												
												<div class="panel-body">
													<div class="col-lg-2 col-md-offset-4">
														<button type="button" class="btn btn-<?php if($input_parameter['presence_class'] == 0){echo 'danger';}else{echo 'success';}?>" onclick='enviar("presence_class",<?php if($input_parameter['presence_class'] == 0){echo '1';}else{echo '0';}?>,"<?php echo $input_parameter_send;?>");'>Presence</button>								
													</div>
													
													
												</div>	
											</div>
										</div>
									</div>
									
									<div class="row">
										<span class="help-block"></span>
									</div>
									
									<div class="row">
										<span class="help-block"></span>
									</div>
									
									
									<div class="row">
										
										<!-- inicio shutter lamp -->
										
										<div class="col-lg-12">
																						
											<div class="col-lg-6">
												<img height="40%" src="img/shutter_<?php echo $status[$output_parameter['shutter_opened_class']]; ?>.jpg" width="40%" >
											</div>	

											<div class="col-lg-6">
												<img height="40%" src="img/lamp_<?php echo $status[$output_parameter['lamp_on_class']]; ?>.jpg" width="40%" >
											</div>												
																		
										</div>
										<!-- fim shutter lamp-->
															
									</div>
									
									
									<div class="row">
										<span class="help-block"></span>
									</div>			
									
									
									
									<div class="row">
										
										<!-- inicio pc1 -->
										
										<div class="col-lg-6">
											<div class="col-lg-6">
												<div class="row">
													<button type="button" class="btn btn-success" onclick='enviar("comp1_sw_on_class","1","<?php echo $input_parameter_send;?>");'>switchon </button>
												</div>
												<span class="help-block"></span>
												<div class="row">
													<button type="button" class="btn btn-danger" onclick='enviar("comp1_sw_off_class","1","<?php echo $input_parameter_send;?>");'>switchoff</button>
												</div>
											</div>
											
											<div class="col-lg-6">
												<img height="130%" src="img/comp_<?php statusComp($output_parameter['comp1_inuse_class'],$output_parameter['comp1_off_class'],$output_parameter['comp1_susp_class']); ?>.jpg" width="130%" >
											</div>								
										</div>
										<!-- fim pc1-->
										
										
										
									</div>
									
									
									
									
									<div class="row">
										<span class="help-block"></span>
									</div>			
									
									
									
									<div class="row">
										
										<!-- inicio ac1 -->
										
										<div class="col-lg-6">
											
											<div class="col-lg-4">
												<button type="button" class="btn btn-success" onclick='enviar("ac1_onoff_class","1","<?php echo $input_parameter_send;?>");'>ON/OFF</button>
											</div>
											
											<div class="col-lg-8">
												<img height="70%" src="img/ac_<?php echo $status[$output_parameter['ac1_status_class']]; ?>.png" width="70%" >
											</div>
											
																		
										</div>
										<!-- fim ac1-->
										
										
										<!-- inicio ac2-->
										
										<div class="col-lg-6">
											<div class="col-lg-4">
												<button type="button" class="btn btn-success" onclick='enviar("ac2_onoff_class","1","<?php echo $input_parameter_send;?>");'>ON/OFF</button>
											</div>
																					
											<div class="col-lg-8">
												<img height="70%" src="img/ac_<?php echo $status[$output_parameter['ac2_status_class']]; ?>.png" width="70%" >
											</div>
																												
										</div>
										<!-- fim ac2-->
										
									</div>								
								</div>	
							</div>
							<!-- Fim Class Lab -->						
							
							<div class="row">
								<div class="col-lg-4 col-lg-offset-4">
									<form role="form" method="post" action="index.php">
										<div class="input-group">
											<input type="hidden" name="restart_system" value="1">
											<button type="submit" class="btn btn-primary btn-lg" >Restart System</button>
										</div>
									</form>
								</div>
							</div>
							
						</div>
						<!-- Fim Direita -->
						
						
					</div>
					
				</div>	
			</div>
		</div>	

    </div>
    <!-- /#wrapper -->
   
</body>

</html>

