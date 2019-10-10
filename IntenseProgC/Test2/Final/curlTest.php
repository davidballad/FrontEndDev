
<?php

$curl = curl_init();
curl_setopt($curl, CURLOPT_URL, 'http://www.google.com');
//curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, false);
//curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);

$result = curl_exec($curl);
echo $result;
