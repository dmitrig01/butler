<?php

class ButlerContext_conf extends ButlerContextMultiple {
  function imply($param) {
    global $conf;
    if (isset($conf[$param])) {
      return $conf[$param];
    }
  }
}