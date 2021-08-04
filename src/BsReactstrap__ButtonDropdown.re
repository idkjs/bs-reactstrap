[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~disabled: bool=?,
    ~dropup: 'a=?,
    ~direction: 'b=?,
    ~isOpen: bool=?,
    ~nav: bool=?,
    ~active: bool=?,
    ~addonType: 'c=?,
    ~size: string=?,
    ~tag: string=?,
    ~toggle: 'd=?,
    ~className: string=?,
    ~cssModule: 'e=?,
    ~inNavbar: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ButtonDropdown";
