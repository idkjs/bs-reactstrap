[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~items: 'a,
    ~indicators: bool=?,
    ~controls: bool=?,
    ~autoPlay: bool=?,
    ~activeIndex: 'b=?,
    ~next: 'c=?,
    ~previous: 'd=?,
    ~goToIndex: 'e=?,
    ~nav: bool=?,
    ~inNavbar: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "UncontrolledCarousel";
