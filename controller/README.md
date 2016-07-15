emergency - registro, emergency
presence - arcondicionado, lighting
leak - registro
warm - arcondicionado


===================
Ambientes a modelar

* Global (emergency, warm, daybreak)

* Student's Lab (presence_1, full_capacity)
    Door, Shutter, Lamp, LightingPolice, Comp x 4, AC x2

* Class Lab (presence_2)
    Door, Shutter, Lamp, LightingPolice, Comp x 4, AC x2

* WC (presence_3, leak)
    Door, WaterSupply, LightingPolice, Lamp

* Hall
    Door, Shutter, Lamp, AC x 2
    
===================
Variáveis de entrada

*Sinais
--emergency
--daybreak
--warm
--presence_students
--presence_class
--presence_hall
--presence_wc
--leak_wc
--full_capacity_students
--allowed_class

*Eventos
--ac1_on_students
--ac2_on_students
--ac1_on_class
--ac2_on_class
--ac1_on_hall
--ac2_on_hall
--open_out_students
--open_in_students
--close_students
--open_out_class
--open_in_class
--close_class
--open_out_wc
--open_in_wc
--close_wc
--open_out_hall
--open_in_hall
--close_hall
--comp1_sw_on_students
--comp1_sw_off_students
--comp2_sw_on_students
--comp2_sw_off_students
--comp3_sw_on_students
--comp3_sw_off_students
--comp4_sw_on_students
--comp4_sw_off_students
--comp1_sw_on_class
--comp1_sw_off_class
--comp2_sw_on_class
--comp2_sw_off_class
--comp3_sw_on_class
--comp3_sw_off_class
--comp4_sw_on_class
--comp4_sw_off_class
--lp_up1_students
--lp_up2_students
--lp_down1_students
--lp_down2_students
--lp_up1_class
--lp_up2_class
--lp_down1_class
--lp_down2_class
--lp_up1_hall
--lp_up2_hall
--lp_down1_hall
--lp_down2_hall
--turn_wc

===================
Saídas

-- opened_students
-- locked_students
-- opened_hall
-- locked_hall
-- opened_wc
-- locked_wc
-- opened_class
-- locked_class
-- ac1_status_students
-- ac2_status_students
-- ac1_status_class
-- ac2_status_class
-- ac1_status_hall
-- ac2_status_hall
-- comp1_off_class
-- comp1_inuse_class
-- comp1_susp_class
-- comp2_off_class
-- comp2_inuse_class
-- comp2_susp_class
-- comp3_off_class
-- comp3_inuse_class
-- comp3_susp_class
-- comp4_off_class
-- comp4_inuse_class
-- comp4_susp_class
-- comp1_off_students
-- comp1_inuse_students
-- comp1_susp_students
-- comp2_off_students
-- comp2_inuse_students
-- comp2_susp_students
-- comp3_off_students
-- comp3_inuse_students
-- comp3_susp_students
-- comp4_off_students
-- comp4_inuse_students
-- comp4_susp_students
-- lamp_on_students
-- lamp_on_class
-- lamp_on_hall
-- lamp_on_wc
-- shutter_opened_students
-- shutter_opened_class
-- shutter_opened_hall
-- lp_dark_students
-- lp_lit_students
-- lp_well_lit_students
-- lp_dark_hall
-- lp_lit_hall
-- lp_well_lit_hall
-- lp_dark_class
-- lp_lit_class
-- lp_well_lit_class