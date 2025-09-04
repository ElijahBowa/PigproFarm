
# Decision Log

## D1 — Local-first database (SQLite)
- Date: 2025-09-04
- Decision: Use SQLite for local storage (single file DB).
- Rationale: Reliable, no internet required, portable backups, easy CSV export.
- Alternatives: Flat files (too fragile), Full client-server DB (overkill for MVP).
- Evidence: Interviews indicate unreliable connectivity.
- Follow-up: Add encryption option later.

## D2 — Desktop-first (Windows/Linux/macOS)
- Date: 2025-09-04
- Decision: Start with desktop; mobile later.
- Rationale: Cheaper hardware, keyboards, easier packaging.
- Follow-up: Explore Android tablet companion in Phase 5.
