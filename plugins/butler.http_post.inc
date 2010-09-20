<?php

class ButlerContext_http_post extends ButlerContextMultiple {
  function imply($param) {
    return $_POST[$param];
  }
}