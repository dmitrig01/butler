<?php

class ButlerContext_user extends ButlerContextSingle {
  function imply() {
    global $user;
    return $user;
  }
}