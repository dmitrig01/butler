<?php

class ButlerContextUser extends ButlerContextItem {
  function get($parts) {
    global $user;
    return $user;
  }
}