<?php

Class Usuario{
    
    public $nome = 'Carlos Vieira';
        public $email = 'carlos@crowsec.com.br';
        public $role = 'user'; // User, Admin, Moderador
        public $id = 3;
        public $isAdmin = true;

        public function mostrarNome(){
            echo $this->nome;
        }
        public function mostrarEmail(){
            echo $this->email;
        }
        public function ehAdmin(){

            if($this->role == 'admin'){
                echo 'You are Administrator of system';
            }else{
                echo 'You arent Administrator!';
        }
    }
}

//$carlos = new Usuario();
echo serialize($carlos);
//$carlos = unserialize('O:7:"Usuario":5:{s:4:"nome";s:13:"Carlos Vieira";s:5:"email";s:21:"carlos@crowsec.com.br";s:4:"role";s:4:"user";s:2:"id";i:3;s:7:"isAdmin";b:1;}');
$carlos -> ehAdmin();

?>