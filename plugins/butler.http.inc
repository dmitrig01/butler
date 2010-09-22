<?php

class ButlerContextHTTP extends ButlerContextItem {
  function get($parts) {
    switch ($parts[0]) {
      case 'get':
        $array = $_GET;
        break;
      case 'post':
        $array = $_POST;
        break;
      default:
        return FALSE;
    }
    if ($parts[1] && isset($array[$parts[1]])) {
      return $array[$parts[1]];
    }
    return FALSE;
  }
}