<?php

class ButlerBlocksBlock_node_content extends ButlerBlocksBlock {
  function render() {
    return node_view($this->context->get('node'));
  }
  function context_needed() {
    return array('node');
  }
}
