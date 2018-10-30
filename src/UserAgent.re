[@bs.module "@quentin-sommer/react-useragent"] external reactClass: ReasonReact.reactClass = "UserAgent";

[@bs.obj]
external makeProps:
  (
    ~computer: bool=?,
    ~windows: bool=?,
    ~linux: bool=?,
    ~mac: bool=?,
    ~mobile: bool=?,
    ~tablet: bool=?,
    ~android: bool=?,
    ~ios: bool=?,
    ~firefox: bool=?,
    ~chrome: bool=?,
    ~edge: bool=?,
    ~safari: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~computer=?,
      ~windows=?,
      ~linux=?,
      ~mac=?,
      ~mobile=?,
      ~tablet=?,
      ~android=?,
      ~ios=?,
      ~firefox=?,
      ~chrome=?,
      ~edge=?,
      ~safari=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~computer?,
        ~windows?,
        ~linux?,
        ~mac?,
        ~mobile?,
        ~tablet?,
        ~android?,
        ~ios?,
        ~firefox?,
        ~chrome?,
        ~edge?,
        ~safari?,
        (),
      ),
    children,
  );
