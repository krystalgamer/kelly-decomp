class AISurferController {
    int device_id;

public:
    int get_id() const;
};

int AISurferController::get_id() const {
    return device_id;
}
