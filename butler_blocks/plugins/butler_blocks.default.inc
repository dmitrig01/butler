<?php

class ButlerBlocksDisplay_default extends ButlerBlocksDisplay {
  function title() {
    if ($this->data['title callback']) {
      return $this->data['title callback'](node_load(2));
    }
    return t($this->data['title']);
  }
}
