[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~_type: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~onClick: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "NavbarToggler";
