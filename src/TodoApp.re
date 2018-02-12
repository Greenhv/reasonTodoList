type item = {
  title: string,
  compoleted: bool,
};

type state = {
  items: list(item),
  newItem: string,
};

let component = ReasonReact.reducerComponent("TodoApp");
let str = ReasonReact.stringToElement;

let make = (_children) => {
  ...component,
  initialState: () => { items: [], newItem: "" },
  reduer: ((), _) => ReasonReact.NoUpdate,
  render: ({ state: { items, newItem } }) => {
    let numItems = List.length(items); 

    <div className="app">
      <div className="title">
        (str("What to do"))
      </div>
      <div className="items">
        (str("Nothing"))
      </div>
      <div className="footer">
        (str(string_of_int(numItems) ++ " items"))
      </div>
    </div>
  }
};
