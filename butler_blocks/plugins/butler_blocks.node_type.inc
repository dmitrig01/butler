<?php

class ButlerBlocksDisplay_node_type extends ButlerBlocksDisplay {
  function active() {
    return $this->context->get('node')->type == $this->data->node_type;
  }
  function title() {
    return $this->context->get('node')->title;
  }
  function available_contexts() {
    return array('node');
  }
}
