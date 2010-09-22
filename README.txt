You can find the design decisions relating to this module at
http://groups.drupal.org/butler.

The butler module intends to provide a unified context for Drupal, through a
single context object.

The context object can be retreived by calling butler_context(), but it is
preferable to be passed a context object, or pass others the context object.

To get a piece of contextual information, simply call ->get() on the context
object with the "selector". The selector is a multi-layer selector pointing to
the specific contextual item. For example, `http:get:q` will fetch the
parameter `q` from the query string, and `node` will fetch the current node.

Additional context may be declared in two ways: statically or dynamically.
To declare the context statically, one may implement hook_butler(), returning
a simple mapping of `selector` => `class name`. The selector may be any number
of levels deep. To add to / change the context dynamically, you can call
`->set()` on the context object. The first parameter is the selector, which
can be any number of levels deep (you can, for example, override just
`http:get:q`, or all of `http`). The second parameter can either be an object,
in which case the ->get method is called to retrieve the context, or a static
data type (string, int, float, array), in which case the selector is directly
mapped to that value.