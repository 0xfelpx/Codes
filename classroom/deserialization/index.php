<?php

class Celular{
    
    public $cor = 'cinza';
    public $modelo = 's21';
    public $camera = 4;

    public function ligar($numero){
        echo "ligando para {$numero}";
    }
    public function enviarMsg($to, $msg){
        echo "Enviando mensagem {$msg} para {$to}";
    }
}

// json_encode -> 
// {"cor":"cinza","modelo":"s21","camera":4}
// php serialize -> 
//O:7:"Celular":3:{s:3:"cor";s:5:"cinza";s:6:"modelo";s:3:"s21";s:6:"camera";i:4;}
//example of object serialized write on hands
//0:2:"tv":2:{s:10:"fabricante";s:9:"polegadas";i:50;}
$celular_do_kadu = new Celular();
$object_serialized = serialize($celular_do_kadu);

$celular_do_felpx = unserialize('O:2:"tv":2:{s:10:"fabricante";s:7:"samsung";s:9:"polegadas";i:50;}');
echo var_dump($celular_do_felpx);