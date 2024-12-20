package restaurant.model;

import java.util.ArrayList;
import java.util.List;

public class Menu {
    private List<MenuItem> items;

    public Menu(List<MenuItem> items) {
        this.items = new ArrayList<>(items);
    }

    public void addItem(MenuItem item) {
        items.add(item);
    }

    public List<MenuItem> getItems() {
        return items;
    }
}
