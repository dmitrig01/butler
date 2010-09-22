<?php

class ButlerContextNode extends ButlerContextItem {
  function get($parts) {
    if (arg(0) == 'node' && is_numeric(arg(1))) {
      return node_load(arg(1));
    }
  }
}
