<?php

class ButlerContextConf extends ButlerContextItem {
  function get($parts) {
    global $conf;
    if (isset($conf[$parts[0]])) {
      return $conf[$parts[0]];
    }
  }
}