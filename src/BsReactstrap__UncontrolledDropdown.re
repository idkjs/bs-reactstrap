//  a11y: PropTypes.bool,
//   disabled: PropTypes.bool,
//   direction: PropTypes.oneOf(['up', 'down', 'left', 'right']),
//   group: PropTypes.bool,
//   isOpen: PropTypes.bool,
//   nav: PropTypes.bool,
//   active: PropTypes.bool,
//   addonType: PropTypes.oneOfType([PropTypes.bool, PropTypes.oneOf(['prepend', 'append'])]),
//   size: PropTypes.string,
//   tag: tagPropType,
//   toggle: PropTypes.func,
//   children: PropTypes.node,
//   className: PropTypes.string,
//   cssModule: PropTypes.object,
//   inNavbar: PropTypes.bool,
//   setActiveFromChild: PropTypes.bool,
// type addonType =( bool, [ `prepend| `append]);
[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~a11y: bool=?,
    ~disabled: bool=?,
    ~direction: [ | `up | `down | `left | `right]=?,
    ~group: bool=?,
    ~isOpen: bool=?,
    ~nav: bool=?,
    ~active: bool=?,
    ~addonType: (bool, [ | `prepend | `append]),
    ~size: string=?,
    ~inNavbar: bool=?,
    ~setActiveFromChild: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "UncontrolledCarousel";
