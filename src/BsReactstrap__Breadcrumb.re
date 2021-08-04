[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~listTag:'b=?,
    ~className: string=?,
    ~listClassName: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Breadcrumb";
