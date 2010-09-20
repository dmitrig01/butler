<?php

class ButlerContext_node extends ButlerContextSingle {
  function imply() {
    if (arg(0) == 'node' && is_numeric(arg(1))) {
      return node_load(arg(1));
    }
  }
}