<?php

class ButlerContext_http_get extends ButlerContextMultiple {
  function imply($param) {
    return $_GET[$param];
  }
}