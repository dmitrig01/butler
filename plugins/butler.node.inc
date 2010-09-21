<?php

class ButlerContext_node extends ButlerContextSingle {
  function imply() {
    if (arg(0) == 'node' && is_numeric(arg(1))) {
      return node_load(arg(1));
    }
  }
  function set($value) {
    // Let you set either a nid or full node.
    if (is_numeric($value)) {
      $this->cache = node_load($value);
    }
    else {
      $this->cache = $value;
    }
  }
}