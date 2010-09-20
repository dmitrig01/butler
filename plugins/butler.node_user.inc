<?php

class ButlerContext_node_user extends ButlerContextSingle {
  function imply() {
    $node = $this->context->get('node');
    return user_load($node->uid);
  }
}