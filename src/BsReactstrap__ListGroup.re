[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~flush: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ListGroup";
