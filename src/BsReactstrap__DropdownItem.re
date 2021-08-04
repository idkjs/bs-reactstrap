[@bs.module "reactstrap"] [@react.component]
external make:
  (    ~id: string=?,
    ~active: bool=?,
    ~disabled: bool=?,
    ~divider: bool=?,
    ~tag: 'a=?,
    ~header: bool=?,
    ~onClick: 'b=?,
    ~to_: string=?,
    ~idactiveClassNameocamllsp: string=?,
    ~className: string=?,
    ~activeClassName: string=?,
    ~cssModule: 'c=?,
    ~toggle: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "DropdownItem";
