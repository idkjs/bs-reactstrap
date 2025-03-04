[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~disabled: bool=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~onClick: 'd=?,
    ~href: 'e=?,
    ~to_: string=?,
    ~exact: bool=?,
    ~activeClassName: string=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "NavLink";
